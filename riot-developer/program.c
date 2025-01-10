#include <stdio.h>
#include <curl/curl.h>

#define API_KEY ""
#define PUUID   ""

int main () {
    CURL *curl;
    CURLcode responseCode;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    printf("Get Zeri's Mastery\n");

    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, 
                            "https://br1.api.riotgames.com/lol/champion-mastery/v4/champion-masteries/by-puuid/" PUUID 
                            "/by-champion/221"
                            "?api_key=" API_KEY );
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
        
        responseCode = curl_easy_perform(curl);

        if(responseCode != CURLE_OK)
            fprintf(stderr, "Request Failed: %s\n", curl_easy_strerror(responseCode));

        curl_easy_cleanup(curl);
    }

    printf("\n");
    curl_global_cleanup();

    return 0;
}

#include<stdio.h>
#include<curl/curl.h>

 
int main(void){

	char target[50];
	printf("Enter ip or url : ");
	scanf("%s",target);


	CURL *curl;
	CURLcode result;

	curl=curl_easy_init();
	if(curl==NULL){
		fprintf(stderr,"http error");
		return -1;
	};
	
	curl_easy_setopt(curl,CURLOPT_URL,target);

	result = curl_easy_perform(curl);

	if (result != CURLM_OK){
	fprintf( stderr, "Error %s", curl_easy_strerror(result));
	}
	curl_easy_cleanup(curl);

}



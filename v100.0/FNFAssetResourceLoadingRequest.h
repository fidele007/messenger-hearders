/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, FNFAssetResourceLoadingContentInformationRequest, FNFAssetResourceLoadingDataRequest, NSURLResponse, NSDictionary;

@interface FNFAssetResourceLoadingRequest : NSObject {

	/*^block*/id _completionCallback;
	NSURLRequest* _request;
	FNFAssetResourceLoadingContentInformationRequest* _contentInformationRequest;
	FNFAssetResourceLoadingDataRequest* _dataRequest;
	NSURLResponse* _response;
	NSURLRequest* _redirect;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,readonly) NSURLRequest * request;                                                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) FNFAssetResourceLoadingContentInformationRequest * contentInformationRequest;              //@synthesize contentInformationRequest=_contentInformationRequest - In the implementation block
@property (nonatomic,readonly) FNFAssetResourceLoadingDataRequest * dataRequest;                                          //@synthesize dataRequest=_dataRequest - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                                                                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSURLRequest * redirect;                                                                       //@synthesize redirect=_redirect - In the implementation block
@property (nonatomic,copy) NSDictionary * metadataDictionary;                                                             //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
-(id)initWithContentInformationRequest:(id)arg1 dataRequest:(id)arg2 urlRequest:(id)arg3 completionCallback:(/*^block*/id)arg4 ;
-(void)finishLoadingWithMetadataDictionary:(id)arg1 ;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(NSURLRequest *)redirect;
-(FNFAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(FNFAssetResourceLoadingDataRequest *)dataRequest;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg1 ;
-(void)setMetadataDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)metadataDictionary;
@end


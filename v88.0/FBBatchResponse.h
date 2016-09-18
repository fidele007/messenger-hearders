/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBResponding.h>

@protocol FBRequest;
@class NSDictionary, NSMapTable, FBGraphBatchRequest, NSString;

@interface FBBatchResponse : NSObject <FBResponding> {

	NSMapTable* _requestToResponseMap;
	FBGraphBatchRequest* _batchRequest;
	id<FBRequest> _request;
	NSDictionary* _headers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
-(id)initWithRequest:(id)arg1 headers:(id)arg2 ;
-(void)setResponse:(id)arg1 forRequest:(id)arg2 ;
-(NSString *)description;
-(id<FBRequest>)request;
-(id)responseForRequest:(id)arg1 ;
-(id)orderedResponses;
-(NSDictionary *)headers;
@end

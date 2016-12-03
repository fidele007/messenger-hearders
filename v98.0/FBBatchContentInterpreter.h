/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContentInterpreting.h>

@class NSDictionary, FBGraphBatchRequest, NSString;

@interface FBBatchContentInterpreter : NSObject <FBContentInterpreting> {

	BOOL _requireAllRequestsToSucceed;
	NSDictionary* _httpHeaders;
	FBGraphBatchRequest* _request;

}

@property (nonatomic,readonly) FBGraphBatchRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL requireAllRequestsToSucceed;              //@synthesize requireAllRequestsToSucceed=_requireAllRequestsToSucceed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * httpHeaders;                        //@synthesize httpHeaders=_httpHeaders - In the implementation block
-(id)initWithRequest:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2 ;
-(id)interpret:(id)arg1 responseProcessor:(id)arg2 error:(id*)arg3 ;
-(BOOL)requireAllRequestsToSucceed;
-(NSString *)description;
-(FBGraphBatchRequest *)request;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
@end

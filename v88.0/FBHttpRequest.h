/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURLRequest, NSString, NSSet, FBScenePath;


@protocol FBHttpRequest
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,copy,readonly) NSString * logNamespace; 
@property (nonatomic,copy,readonly) NSString * logName; 
@property (nonatomic,copy,readonly) NSSet * analyticsTags; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) unsigned long long priorityOrder; 
@property (nonatomic,readonly) BOOL allowRetry; 
@property (nonatomic,readonly) BOOL disableCustomProtocols; 
@property (nonatomic,readonly) BOOL silentLoading; 
@property (nonatomic,readonly) unsigned long long hardTimeout; 
@property (nonatomic,readonly) BOOL shouldHandleCookies; 
@property (nonatomic,readonly) BOOL enableAuthentication; 
@property (nonatomic,copy,readonly) NSString * actorForAuthentication; 
@property (nonatomic,readonly) BOOL shouldContinueInBackground; 
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,readonly) BOOL piggyBackRequest; 
@property (nonatomic,readonly) BOOL exclusiveRequest; 
@required
-(BOOL)shouldContinueInBackground;
-(FBScenePath *)scenePath;
-(NSSet *)analyticsTags;
-(BOOL)allowRetry;
-(unsigned long long)hardTimeout;
-(BOOL)disableCustomProtocols;
-(NSString *)logNamespace;
-(unsigned long long)priorityOrder;
-(BOOL)piggyBackRequest;
-(BOOL)exclusiveRequest;
-(BOOL)silentLoading;
-(BOOL)enableAuthentication;
-(NSString *)actorForAuthentication;
-(BOOL)shouldHandleCookies;
-(NSURLRequest *)request;
-(long long)priority;
-(NSString *)logName;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSingleUserHandlerRequest, NSString;

@interface MNSingleUserRemotePopulationJobInfo : NSObject {

	MNSingleUserHandlerRequest* _request;
	NSString* _loadingIndicatorKey;

}

@property (nonatomic,copy) MNSingleUserHandlerRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * loadingIndicatorKey;                    //@synthesize loadingIndicatorKey=_loadingIndicatorKey - In the implementation block
-(NSString *)loadingIndicatorKey;
-(void)setLoadingIndicatorKey:(NSString *)arg1 ;
-(MNSingleUserHandlerRequest *)request;
-(void)setRequest:(MNSingleUserHandlerRequest *)arg1 ;
@end

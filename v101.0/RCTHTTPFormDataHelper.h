/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableData, NSString, RCTNetworking;

@interface RCTHTTPFormDataHelper : NSObject {

	NSMutableArray* _parts;
	NSMutableData* _multipartBody;
	/*^block*/id _callback;
	NSString* _boundary;
	RCTNetworking* _networker;

}

@property (assign,nonatomic,__weak) RCTNetworking * networker;              //@synthesize networker=_networker - In the implementation block
-(RCTNetworking *)networker;
-(void)setNetworker:(RCTNetworking *)arg1 ;
-(/*^block*/id)handleResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)process:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

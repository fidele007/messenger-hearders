/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPushUnregisterRequestParams : NSObject {

	NSString* _token;
	NSString* _transmitterID;

}

@property (nonatomic,copy) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;              //@synthesize transmitterID=_transmitterID - In the implementation block
-(NSString *)transmitterID;
-(void)setTransmitterID:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end


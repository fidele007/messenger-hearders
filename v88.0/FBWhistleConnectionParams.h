/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBWhistleConnectionParams : NSObject {

	BOOL _useVOIP;
	int _publishFormat;
	NSString* _clientID;

}

@property (nonatomic,copy,readonly) NSString * clientID;              //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) BOOL useVOIP;                            //@synthesize useVOIP=_useVOIP - In the implementation block
@property (assign,nonatomic) int publishFormat;                       //@synthesize publishFormat=_publishFormat - In the implementation block
-(BOOL)useVOIP;
-(void)setUseVOIP:(BOOL)arg1 ;
-(id)initWithClientID:(id)arg1 useVOIP:(BOOL)arg2 publishFormat:(int)arg3 ;
-(void)setPublishFormat:(int)arg1 ;
-(int)publishFormat;
-(NSString *)clientID;
@end


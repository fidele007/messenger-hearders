/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsSettingsThreadProtectionCellViewModel : FBValueObject <NSCopying> {

	BOOL _isSwitchOn;
	NSString* _userFBID;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * userFBID;                 //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL isSwitchOn;                          //@synthesize isSwitchOn=_isSwitchOn - In the implementation block
-(NSString *)userFBID;
-(id)initWithUserFBID:(id)arg1 displayName:(id)arg2 isSwitchOn:(BOOL)arg3 ;
-(NSString *)displayName;
-(BOOL)isSwitchOn;
@end


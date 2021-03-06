/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNKeysConfiguration : FBValueObject <NSCopying> {

	NSString* _loginSecret;
	NSString* _appGroup;

}

@property (nonatomic,copy,readonly) NSString * loginSecret;              //@synthesize loginSecret=_loginSecret - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroup;                 //@synthesize appGroup=_appGroup - In the implementation block
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 ;
-(NSString *)appGroup;
-(NSString *)loginSecret;
@end


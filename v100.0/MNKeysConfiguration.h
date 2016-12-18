/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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


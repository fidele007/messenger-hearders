/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAuthUserInfo : FBValueObject <NSCopying, NSCoding> {

	NSString* _fullName;
	NSString* _shortName;
	NSString* _locale;
	NSString* _fbid;

}

@property (nonatomic,copy,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * locale;                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbid;                   //@synthesize fbid=_fbid - In the implementation block
-(NSString *)fbid;
-(id)initWithFullName:(id)arg1 shortName:(id)arg2 locale:(id)arg3 fbid:(id)arg4 ;
-(NSString *)locale;
-(NSString *)shortName;
-(NSString *)fullName;
@end


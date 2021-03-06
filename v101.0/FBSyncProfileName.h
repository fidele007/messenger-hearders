/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSyncProfileName : FBValueObject <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _first;
	NSString* _last;
	NSString* _nameAlternate;
	NSString* _firstAlternate;
	NSString* _lastAlternate;

}

@property (nonatomic,copy,readonly) NSString * locale;                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * first;                       //@synthesize first=_first - In the implementation block
@property (nonatomic,copy,readonly) NSString * last;                        //@synthesize last=_last - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameAlternate;               //@synthesize nameAlternate=_nameAlternate - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstAlternate;              //@synthesize firstAlternate=_firstAlternate - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastAlternate;               //@synthesize lastAlternate=_lastAlternate - In the implementation block
-(id)initWithLocale:(id)arg1 name:(id)arg2 first:(id)arg3 last:(id)arg4 nameAlternate:(id)arg5 firstAlternate:(id)arg6 lastAlternate:(id)arg7 ;
-(NSString *)nameAlternate;
-(NSString *)firstAlternate;
-(NSString *)lastAlternate;
-(NSString *)name;
-(NSString *)locale;
-(NSString *)first;
-(NSString *)last;
@end


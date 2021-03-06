/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNContactsForThreadSuggestionsViewSection : FBValueObject <NSCopying> {

	BOOL _contactsPreselected;
	NSArray* _sectionContacts;
	NSString* _sectionTitle;

}

@property (nonatomic,copy,readonly) NSArray * sectionContacts;              //@synthesize sectionContacts=_sectionContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionTitle;                //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) BOOL contactsPreselected;                    //@synthesize contactsPreselected=_contactsPreselected - In the implementation block
-(id)initWithSectionContacts:(id)arg1 sectionTitle:(id)arg2 contactsPreselected:(BOOL)arg3 ;
-(NSArray *)sectionContacts;
-(BOOL)contactsPreselected;
-(NSString *)sectionTitle;
@end


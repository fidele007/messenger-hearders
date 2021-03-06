/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNSuggestedContactsRetrieverResponse : FBValueObject <NSCopying> {

	NSArray* _suggestedContactsInSection;
	NSArray* _preselectedContacts;
	NSArray* _sectionTitles;
	NSArray* _sectionDetailItems;
	NSArray* _sectionIndexTitles;

}

@property (nonatomic,copy,readonly) NSArray * suggestedContactsInSection;              //@synthesize suggestedContactsInSection=_suggestedContactsInSection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preselectedContacts;                     //@synthesize preselectedContacts=_preselectedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionTitles;                           //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionDetailItems;                      //@synthesize sectionDetailItems=_sectionDetailItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionIndexTitles;                      //@synthesize sectionIndexTitles=_sectionIndexTitles - In the implementation block
-(id)initWithSuggestedContactsInSection:(id)arg1 preselectedContacts:(id)arg2 sectionTitles:(id)arg3 sectionDetailItems:(id)arg4 sectionIndexTitles:(id)arg5 ;
-(NSArray *)suggestedContactsInSection;
-(NSArray *)sectionDetailItems;
-(NSArray *)preselectedContacts;
-(NSArray *)sectionTitles;
-(NSArray *)sectionIndexTitles;
@end


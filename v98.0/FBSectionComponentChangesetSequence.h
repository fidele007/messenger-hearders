/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBImmutableChangesetList, NSIndexSet;

@interface FBSectionComponentChangesetSequence : NSObject {

	int _identifier;
	FBImmutableChangesetList* _changesetList;
	NSIndexSet* _allSections;

}

@property (nonatomic,readonly) FBImmutableChangesetList * changesetList;              //@synthesize changesetList=_changesetList - In the implementation block
@property (nonatomic,readonly) NSIndexSet * allSections;                              //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,readonly) int identifier;                                        //@synthesize identifier=_identifier - In the implementation block
+(id)sequenceWithInitialChangeset:(id)arg1 ;
-(id)initWithChangesetList:(id)arg1 allSections:(id)arg2 identifier:(long long)arg3 ;
-(id)addChangeset:(id)arg1 ;
-(FBImmutableChangesetList *)changesetList;
-(int)identifier;
-(NSIndexSet *)allSections;
@end


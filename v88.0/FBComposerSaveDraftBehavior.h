/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerSaveDraftBehavior : FBValueObject <NSCopying, NSCoding> {

	BOOL _replaceCancelWithClearButtonOnEntry;
	NSString* _draftRetrievalEntryPointDescription;
	long long _draftSavedCount;
	double _elapsedCompositionDuration;
	NSString* _draftStoreIdentifier;
	unsigned long long _saveDraftAllowance;

}

@property (nonatomic,copy,readonly) NSString * draftRetrievalEntryPointDescription;              //@synthesize draftRetrievalEntryPointDescription=_draftRetrievalEntryPointDescription - In the implementation block
@property (nonatomic,readonly) long long draftSavedCount;                                        //@synthesize draftSavedCount=_draftSavedCount - In the implementation block
@property (nonatomic,readonly) double elapsedCompositionDuration;                                //@synthesize elapsedCompositionDuration=_elapsedCompositionDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * draftStoreIdentifier;                             //@synthesize draftStoreIdentifier=_draftStoreIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long saveDraftAllowance;                            //@synthesize saveDraftAllowance=_saveDraftAllowance - In the implementation block
@property (nonatomic,readonly) BOOL replaceCancelWithClearButtonOnEntry;                         //@synthesize replaceCancelWithClearButtonOnEntry=_replaceCancelWithClearButtonOnEntry - In the implementation block
-(id)initWithDraftRetrievalEntryPointDescription:(id)arg1 draftSavedCount:(long long)arg2 elapsedCompositionDuration:(double)arg3 draftStoreIdentifier:(id)arg4 saveDraftAllowance:(unsigned long long)arg5 replaceCancelWithClearButtonOnEntry:(BOOL)arg6 ;
-(NSString *)draftRetrievalEntryPointDescription;
-(long long)draftSavedCount;
-(double)elapsedCompositionDuration;
-(NSString *)draftStoreIdentifier;
-(unsigned long long)saveDraftAllowance;
-(BOOL)replaceCancelWithClearButtonOnEntry;
@end


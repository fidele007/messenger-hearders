/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, FBComposerPlaceSuggestionsQueryData, NSString;

@interface FBComposerPlaceSuggestions : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	BOOL _shouldShow;
	NSArray* _places;
	FBComposerPlaceSuggestionsQueryData* _queryData;

}

@property (nonatomic,copy,readonly) NSArray * places;                                             //@synthesize places=_places - In the implementation block
@property (nonatomic,readonly) BOOL shouldShow;                                                   //@synthesize shouldShow=_shouldShow - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPlaceSuggestionsQueryData * queryData;              //@synthesize queryData=_queryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaces:(id)arg1 shouldShow:(BOOL)arg2 queryData:(id)arg3 ;
-(FBComposerPlaceSuggestionsQueryData *)queryData;
-(BOOL)shouldShow;
-(NSArray *)places;
-(id)shallowCopy;
@end


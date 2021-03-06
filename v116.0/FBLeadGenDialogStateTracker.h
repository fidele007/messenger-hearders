/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBMemLeadGenData, NSString, NSArray;

@interface FBLeadGenDialogStateTracker : NSObject {

	NSMutableDictionary* _fieldKeyToValueMutable;
	NSMutableDictionary* _selectorKeyToOptionTokenMap;
	FBMemLeadGenData* _leadGenData;
	BOOL _hasCompletelySeenCustomDisclaimer;
	NSString* _feedUnitType;
	long long _pageIndex;
	long long _maxSurface;
	long long _maxPageIndex;
	long long _surface;
	unsigned long long _validationErrorTimes;
	NSMutableDictionary* _fieldEditingTracker;
	NSArray* _actionLinks;

}

@property (nonatomic,copy,readonly) NSString * feedUnitType;                       //@synthesize feedUnitType=_feedUnitType - In the implementation block
@property (assign,nonatomic) long long pageIndex;                                  //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) long long maxSurface;                                 //@synthesize maxSurface=_maxSurface - In the implementation block
@property (assign,nonatomic) long long maxPageIndex;                               //@synthesize maxPageIndex=_maxPageIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCompletelySeenCustomDisclaimer;               //@synthesize hasCompletelySeenCustomDisclaimer=_hasCompletelySeenCustomDisclaimer - In the implementation block
@property (assign,nonatomic) long long surface;                                    //@synthesize surface=_surface - In the implementation block
@property (assign,nonatomic) unsigned long long validationErrorTimes;              //@synthesize validationErrorTimes=_validationErrorTimes - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fieldEditingTracker;              //@synthesize fieldEditingTracker=_fieldEditingTracker - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionLinks;                         //@synthesize actionLinks=_actionLinks - In the implementation block
-(void)setSurface:(long long)arg1 ;
-(id)initWithActionLinks:(id)arg1 feedUnitType:(id)arg2 ;
-(BOOL)hasCompletelySeenCustomDisclaimer;
-(void)setHasCompletelySeenCustomDisclaimer:(BOOL)arg1 ;
-(id)valueForFieldKey:(id)arg1 ;
-(NSMutableDictionary *)fieldEditingTracker;
-(void)setValue:(id)arg1 forFieldKey:(id)arg2 ;
-(long long)maxSurface;
-(void)setMaxSurface:(long long)arg1 ;
-(long long)maxPageIndex;
-(void)setMaxPageIndex:(long long)arg1 ;
-(unsigned long long)validationErrorTimes;
-(void)setValidationErrorTimes:(unsigned long long)arg1 ;
-(void)setupSelectorKeyOptionTokenMapWithLeadGenData:(id)arg1 ;
-(id)userInfoKeyValueDict;
-(NSString *)feedUnitType;
-(void)setFieldEditingTracker:(NSMutableDictionary *)arg1 ;
-(NSArray *)actionLinks;
-(long long)count;
-(long long)pageIndex;
-(void)setPageIndex:(long long)arg1 ;
-(long long)surface;
@end


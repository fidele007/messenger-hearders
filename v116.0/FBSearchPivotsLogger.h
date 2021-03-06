/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchPivotsSource;
@class NSMutableSet, NSString;

@interface FBSearchPivotsLogger : NSObject {

	id<FBSearchPivotsSource> _source;
	NSMutableSet* _seenPivotIDs;
	NSString* _context;
	unsigned long long _pivotType;

}

@property (nonatomic,copy) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long pivotType;              //@synthesize pivotType=_pivotType - In the implementation block
-(id)_commonDataForPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 pivotType:(unsigned long long)arg2 source:(id)arg3 ;
-(void)logLoad;
-(void)logImpressionOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logClickOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 withClickType:(id)arg3 ;
-(void)logOpenLinkOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)pivotType;
-(void)setPivotType:(unsigned long long)arg1 ;
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
@end


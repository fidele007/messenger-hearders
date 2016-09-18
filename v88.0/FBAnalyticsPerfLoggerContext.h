/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBAnalyticsPerfLoggerContext : NSObject {

	int _mergePolicy;
	NSString* _tag;
	NSString* _status;
	NSString* _parentEvent;
	NSString* _moduleName;
	/*^block*/id _extras;
	double _animationDuration;
	NSString* _sequenceId;

}

@property (nonatomic,copy) NSString * sequenceId;                   //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy) NSString * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * parentEvent;                  //@synthesize parentEvent=_parentEvent - In the implementation block
@property (nonatomic,copy) NSString * moduleName;                   //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy) id extras;                               //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) int mergePolicy;                       //@synthesize mergePolicy=_mergePolicy - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)setExtras:(id)arg1 ;
-(id)extras;
-(NSString *)sequenceId;
-(NSString *)moduleName;
-(void)setModuleName:(NSString *)arg1 ;
-(void)setSequenceId:(NSString *)arg1 ;
-(void)mergeWithContext:(id)arg1 ;
-(int)mergePolicy;
-(id)debugDescription;
-(void)setAnimationDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(double)animationDuration;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setMergePolicy:(int)arg1 ;
-(void)setParentEvent:(NSString *)arg1 ;
-(NSString *)parentEvent;
@end


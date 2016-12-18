/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <NSCopying> {

	POPAnimationState* _state;
	SpringSolver<POP::Vector4<double> >Ref _solver;
	id _currentValue;
	NSArray* _progressMarkers;

}

@property (assign,nonatomic) SpringSolver<POP::Vector4<double> >Ref solver;              //@synthesize solver=_solver - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,copy,readonly) id currentValue;                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) NSArray * progressMarkers;                                    //@synthesize progressMarkers=_progressMarkers - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,readonly) POPAnimationTracer * tracer; 
@property (nonatomic,copy) id animationDidStartBlock; 
@property (nonatomic,copy) id animationDidReachToValueBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id animationDidApplyBlock; 
@property (assign,nonatomic) BOOL removedOnCompletion; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL autoreverses; 
@property (assign,nonatomic) long long repeatCount; 
@property (assign,nonatomic) BOOL repeatForever; 
-(void)setRepeatForever:(BOOL)arg1 ;
-(void)setAnimationDidApplyBlock:(id)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)animationDidReachToValueBlock;
-(void)setAnimationDidReachToValueBlock:(id)arg1 ;
-(id)animationDidApplyBlock;
-(BOOL)repeatForever;
-(POPAnimationTracer *)tracer;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(SpringSolver<POP::Vector4<double> >Ref)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >Ref)arg1 ;
-(NSArray *)progressMarkers;
-(void)setProgressMarkers:(NSArray *)arg1 ;
-(BOOL)removedOnCompletion;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)_init;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)repeatCount;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(long long)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(double)beginTime;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(id)animationDidStartBlock;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)currentValue;
-(BOOL)isPaused;
@end


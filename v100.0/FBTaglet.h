/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagletDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSString, FBTagView;

@interface FBTaglet : NSObject {

	BOOL _visiblity;
	double _scale;
	NSString* _text;
	FBTagView* _view;
	id<FBTagletDelegate> _delegate;
	CGPoint _position;

}

@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGPoint position;                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) FBTagView * view;                                //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL visiblity;                                    //@synthesize visiblity=_visiblity - In the implementation block
@property (assign,nonatomic,__weak) id<FBTagletDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithText:(id)arg1 detailText:(id)arg2 position:(CGPoint)arg3 session:(id)arg4 ;
-(BOOL)visiblity;
-(void)setVisiblity:(BOOL)arg1 ;
-(void)setDelegate:(id<FBTagletDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id<FBTagletDelegate>)delegate;
-(FBTagView *)view;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(NSString *)text;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(BOOL)hidden;
@end


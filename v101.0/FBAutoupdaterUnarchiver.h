/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoupdaterUnarchiver <NSObject>
@property (assign,nonatomic,__weak) id<FBAutoupdaterUnarchiverDelegate> delegate; 
@required
+(id)new;
-(void)unarchive:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id)init;
-(id<FBAutoupdaterUnarchiverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1;
-(id)progress;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableButtonContents.h>

@class ASTextNode, BFTask, NSString, UIView;

@interface FBExpandableShareButtonContents : NSObject <FBExpandableButtonContents> {

	FBTextMetrics* _collapsedTextMetrics;
	FBTextMetrics* _expandedTextMetrics;
	ASTextNode* _collapsedTextNode;
	ASTextNode* _expandedTextNode;
	BFTask* _initializationTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BFTask * initializationTask;              //@synthesize initializationTask=_initializationTask - In the implementation block
@property (nonatomic,readonly) UIView * collapsedView; 
@property (nonatomic,readonly) UIView * expandedView; 
@property (nonatomic,readonly) CGSize collapsedSize; 
@property (nonatomic,readonly) CGSize expandedSize; 
-(id)initWithCollapsedColor:(id)arg1 expandedColor:(id)arg2 ;
-(BFTask *)initializationTask;
-(UIView *)collapsedView;
-(UIView *)expandedView;
-(CGSize)collapsedSize;
-(CGSize)expandedSize;
@end


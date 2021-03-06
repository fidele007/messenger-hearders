/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBNativeAdCTAButtonNodeMetrics, ASTextNode, ASImageNode;

@interface FBNativeAdCTAButtonNode : ASControlNode {

	FBNativeAdCTAButtonNodeMetrics* _metrics;
	ASTextNode* _ctaButtonTitleNode;
	ASImageNode* _rightChevronNode;

}
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithActionButtonText:(id)arg1 metrics:(id)arg2 useDesign:(BOOL)arg3 ;
-(void)layout;
@end


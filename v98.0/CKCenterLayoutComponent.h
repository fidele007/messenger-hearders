/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent;

@interface CKCenterLayoutComponent : CKComponent {

	unsigned long long _centeringOptions;
	unsigned long long _sizingOptions;
	CKComponent* _child;

}
+(id)newWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3 size:(const CKComponentSize*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end


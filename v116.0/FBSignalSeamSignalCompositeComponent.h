/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKCompositeComponent.h>

@interface FBSignalSeamSignalCompositeComponent : CKCompositeComponent {

	unsigned long long _updateMode;
	Signal<CKComponent *()()>* _componentCreationBlockSignal;

}

@property (nonatomic,readonly) unsigned long long updateMode;                                        //@synthesize updateMode=_updateMode - In the implementation block
@property (nonatomic,readonly) Signal<CKComponent *()()>* componentCreationBlockSignal;              //@synthesize componentCreationBlockSignal=_componentCreationBlockSignal - In the implementation block
+(id)newWithUpdateMode:(unsigned long long)arg1 componentCreationBlockSignal:(Signal<CKComponent *()()>*)arg2 ;
-(Signal<CKComponent *()()>*)componentCreationBlockSignal;
-(unsigned long long)updateMode;
@end


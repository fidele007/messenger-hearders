/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FB360PhotoPresenterProtocol;
#import <Messenger/Messenger-Structs.h>
@class FBUserSession;

@interface FB360PhotoPresenter : NSObject {

	FBUserSession* _session;
	id<FB360PhotoPresenterProtocol> _internalPresenter;

}

@property (nonatomic,retain) id<FB360PhotoPresenterProtocol> internalPresenter;              //@synthesize internalPresenter=_internalPresenter - In the implementation block
-(id)fetch360PhotoResourceWithPhoto:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isRendererReady;
-(BOOL)isResourceReady;
-(id<FB360PhotoPresenterProtocol>)internalPresenter;
-(void)copyAdditionalResourceIfNecessary:(id)arg1 ;
-(void)prepareRendererWithContext:(id)arg1 viewParams:(id)arg2 viewSize:(CGSize)arg3 rendererReady:(/*^block*/id)arg4 ;
-(void)invalidateRenderer;
-(id)fetch360PhotoResourceWithPhotoEncoding:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInternalPresenter:(id<FB360PhotoPresenterProtocol>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithSession:(id)arg1 ;
@end


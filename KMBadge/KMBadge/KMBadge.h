//
//  KMBadge.h
//  KMBadge
//
//  Created by vincent on 11/25/13.
//  Copyright (c) 2013 Kumaya Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, KMBadgeType) {
    KMBadgeTypeStroke,
    KMBadgeTypeSolid,
    KMBadgeTypeStrokeWithSolid,
    
    KMBadgeTypeSystem = KMBadgeTypeSolid                         // no button type
};


struct KMBadgeEdgeInsets {
    CGFloat x;  // the distence of top and buttom
    CGFloat y;  // the distence of left and right
};
typedef struct KMBadgeEdgeInsets KMBadgeEdgeInsets;


@interface KMBadge : UIView {

}

@property (nonatomic)           KMBadgeEdgeInsets    badgeEdgeInsets;
@property (nonatomic)           CGFloat              cornerRadius;
@property (nonatomic, retain)   NSString            *text;
@property (nonatomic, retain)   UIColor             *textColor;
@property (nonatomic, retain)   UIColor             *backgroundColor;
@property (nonatomic, retain)   UIFont              *font;


+ (KMBadge *)badgeWithType:(KMBadgeType)aBadgeType; // Default Label with default font


@end

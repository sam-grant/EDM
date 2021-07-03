void SmallAngleApprox()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 29 13:50:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.125,-0.1312434,1.125,1.181191);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TF1 *theta1 = new TF1("theta",";#theta [rad];Function value",0,1, TF1::EAddToList::kDefault);
   theta1->SetNpx(10000);
   theta1->SetFillColor(19);
   theta1->SetFillStyle(0);
   theta1->SetLineWidth(3);
   theta1->GetXaxis()->SetTitle("#theta [rad]");
   theta1->GetXaxis()->CenterTitle(true);
   theta1->GetXaxis()->SetLabelFont(42);
   theta1->GetXaxis()->SetTitleSize(0.04);
   theta1->GetXaxis()->SetTitleOffset(1.1);
   theta1->GetXaxis()->SetTitleFont(42);
   theta1->GetYaxis()->SetTitle("Function value");
   theta1->GetYaxis()->CenterTitle(true);
   theta1->GetYaxis()->SetLabelFont(42);
   theta1->GetYaxis()->SetTitleSize(0.04);
   theta1->GetYaxis()->SetTitleOffset(1.1);
   theta1->GetYaxis()->SetTitleFont(42);
   theta1->Draw("");
   
   TF1 *asintheta2 = new TF1("asintheta","asin(x)",0,1, TF1::EAddToList::kDefault);
   asintheta2->SetNpx(10000);
   asintheta2->SetFillColor(19);
   asintheta2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   asintheta2->SetLineColor(ci);
   asintheta2->SetLineWidth(3);
   asintheta2->GetXaxis()->SetLabelFont(42);
   asintheta2->GetXaxis()->SetTitleOffset(1);
   asintheta2->GetXaxis()->SetTitleFont(42);
   asintheta2->GetYaxis()->SetLabelFont(42);
   asintheta2->GetYaxis()->SetTitleFont(42);
   asintheta2->Draw("same");
   
   TF1 *atantheta3 = new TF1("atantheta","atan(x)",0,1, TF1::EAddToList::kDefault);
   atantheta3->SetNpx(10000);
   atantheta3->SetFillColor(19);
   atantheta3->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   atantheta3->SetLineColor(ci);
   atantheta3->SetLineWidth(3);
   atantheta3->GetXaxis()->SetLabelFont(42);
   atantheta3->GetXaxis()->SetTitleOffset(1);
   atantheta3->GetXaxis()->SetTitleFont(42);
   atantheta3->GetYaxis()->SetLabelFont(42);
   atantheta3->GetYaxis()->SetTitleFont(42);
   atantheta3->Draw("same");
   
   TLegend *leg = new TLegend(0.11,0.69,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("theta","#theta","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("asintheta","sin^{-1}(#theta)","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("atantheta","tan^{-1}(#theta)","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

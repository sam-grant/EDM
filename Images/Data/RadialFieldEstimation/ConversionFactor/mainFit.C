void mainFit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 24 19:15:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0.04590115,0.04291398,0.07650345,0.06917291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph0_fy1009[4] = {
   0.0645117,
   0.05664662,
   0.05076836,
   0.04747224};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.0002847164,
   0.00021044,
   0.0001813621,
   0.00018177};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT/#LTB_{r}^{App}#GT [mm/ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0.0492674,0.07344322);
   Graph_Graph01009->SetMinimum(0.04553987);
   Graph_Graph01009->SetMaximum(0.06654702);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("#LTy#GT/#LTB_{r}^{App}#GT [mm/ppm]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.35);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   fit1010->SetNpx(10000);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1010->SetLineColor(ci);
   fit1010->SetLineWidth(3);
   fit1010->SetChisquare(2.338509);
   fit1010->SetNDF(2);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,0.00406094);
   fit1010->SetParError(0,0.000896149);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.8434073);
   fit1010->SetParError(1,0.01537865);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.15,0.62,0.3,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("c [mm/ppm]");
   pt_LaTex = pt->AddText("m [mm#upointkV/ppm]");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.62,0.55,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.17
");
   pt_LaTex = pt->AddText("0.00406
#pm0.0009
");
   pt_LaTex = pt->AddText("0.84
#pm0.02
");
   pt->Draw();
   
   TF1 *fit1011 = new TF1("fit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   fit1011->SetNpx(10000);
   fit1011->SetFillColor(19);
   fit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1011->SetLineColor(ci);
   fit1011->SetLineWidth(3);
   fit1011->SetChisquare(2.338509);
   fit1011->SetNDF(2);
   fit1011->GetXaxis()->SetLabelFont(42);
   fit1011->GetXaxis()->SetTitleOffset(1);
   fit1011->GetXaxis()->SetTitleFont(42);
   fit1011->GetYaxis()->SetLabelFont(42);
   fit1011->GetYaxis()->SetTitleFont(42);
   fit1011->SetParameter(0,0.00406094);
   fit1011->SetParError(0,0.000896149);
   fit1011->SetParLimits(0,0,0);
   fit1011->SetParameter(1,0.8434073);
   fit1011->SetParError(1,0.01537865);
   fit1011->SetParLimits(1,0,0);
   fit1011->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

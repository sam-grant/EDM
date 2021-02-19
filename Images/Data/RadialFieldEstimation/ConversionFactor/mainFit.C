void mainFit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 18 18:58:09 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.04590115,0.04041512,0.07650345,0.06440087);
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
   0.06019296,
   0.05312037,
   0.04763511,
   0.04455664};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.0002102907,
   0.0001464241,
   0.0001463598,
   0.0001438884};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT/#LTB_{r}^{App}#GT [mm/ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0.0492674,0.07344322);
   Graph_Graph01009->SetMinimum(0.0428137);
   Graph_Graph01009->SetMaximum(0.0620023);
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
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);
   fit1010->SetLineColor(2);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(1.672759);
   fit1010->SetNDF(2);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,0.00460494);
   fit1010->SetParError(0,0.0006818875);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.7768459);
   fit1010->SetParError(1,0.01158826);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   
   TPaveStats *ptstats = new TPaveStats(0.13,0.73,0.49,0.89,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(0);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 1.673 / 2");
   ptstats_LaTex = ptstats->AddText("c [mm/ppm] = 0.004605 #pm 0.0006819 ");
   ptstats_LaTex = ptstats->AddText("m [mm#upointkV/ppm] = 0.7768 #pm 0.01159 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
   
   TF1 *fit1011 = new TF1("fit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   fit1011->SetFillColor(19);
   fit1011->SetFillStyle(0);
   fit1011->SetLineColor(2);
   fit1011->SetLineWidth(2);
   fit1011->SetChisquare(1.672759);
   fit1011->SetNDF(2);
   fit1011->GetXaxis()->SetLabelFont(42);
   fit1011->GetXaxis()->SetTitleOffset(1);
   fit1011->GetXaxis()->SetTitleFont(42);
   fit1011->GetYaxis()->SetLabelFont(42);
   fit1011->GetYaxis()->SetTitleFont(42);
   fit1011->SetParameter(0,0.00460494);
   fit1011->SetParError(0,0.0006818875);
   fit1011->SetParLimits(0,0,0);
   fit1011->SetParameter(1,0.7768459);
   fit1011->SetParError(1,0.01158826);
   fit1011->SetParLimits(1,0,0);
   fit1011->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

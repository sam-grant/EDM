void FieldFit_pValCheck2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 15:47:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-73.93958,75,69.89952);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1029[5] = {
   44.9807,
   24.70253,
   -11.37285,
   -29.23946,
   -48.29926};
   Double_t Graph0_fex1029[5] = {
   0,
   0,
   6.953117e-310,
   6.953117e-310,
   2.253615e-314};
   Double_t Graph0_fey1029[5] = {
   0.9456389,
   0.7802126,
   0.7948185,
   0.7982469,
   1.667132};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","",100,-60,60);
   Graph_Graph01029->SetMinimum(-59.55567);
   Graph_Graph01029->SetMaximum(55.51561);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   
   TF1 *mainFit1030 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1030->SetFillColor(19);
   mainFit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1030->SetLineColor(ci);
   mainFit1030->SetLineWidth(2);
   mainFit1030->SetChisquare(2.675322);
   mainFit1030->SetNDF(3);
   mainFit1030->GetXaxis()->SetLabelFont(42);
   mainFit1030->GetXaxis()->SetTitleOffset(1);
   mainFit1030->GetXaxis()->SetTitleFont(42);
   mainFit1030->GetYaxis()->SetLabelFont(42);
   mainFit1030->GetYaxis()->SetTitleFont(42);
   mainFit1030->SetParameter(0,-2.032239);
   mainFit1030->SetParError(0,0.4020763);
   mainFit1030->SetParLimits(0,0,0);
   mainFit1030->SetParameter(1,0.9203754);
   mainFit1030->SetParError(1,0.01226251);
   mainFit1030->SetParLimits(1,0,0);
   mainFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1030);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.892");
   pt_LaTex = pt->AddText(" 0.92#pm0.0123");
   pt_LaTex = pt->AddText("#minus2.03#pm0.402");
   pt_LaTex = pt->AddText("#minus2.21#pm0.434");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,2.208054,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.208054,-59.55567,2.208054,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1031 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1031->SetFillColor(19);
   mainFit1031->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1031->SetLineColor(ci);
   mainFit1031->SetLineWidth(2);
   mainFit1031->SetChisquare(2.675322);
   mainFit1031->SetNDF(3);
   mainFit1031->GetXaxis()->SetLabelFont(42);
   mainFit1031->GetXaxis()->SetTitleOffset(1);
   mainFit1031->GetXaxis()->SetTitleFont(42);
   mainFit1031->GetYaxis()->SetLabelFont(42);
   mainFit1031->GetYaxis()->SetTitleFont(42);
   mainFit1031->SetParameter(0,-2.032239);
   mainFit1031->SetParError(0,0.4020763);
   mainFit1031->SetParLimits(0,0,0);
   mainFit1031->SetParameter(1,0.9203754);
   mainFit1031->SetParError(1,0.01226251);
   mainFit1031->SetParLimits(1,0,0);
   mainFit1031->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

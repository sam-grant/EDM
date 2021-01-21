void FieldFit_pValCheck1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 00:01:04 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-53.90441,45,54.92169);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[5] = {
   30,
   6.953125e-310,
   6.953282e-310,
   6.953282e-310,
   0};
   Double_t Graph0_fy1016[5] = {
   35.76673,
   0,
   2.174969e-314,
   6.953282e-310,
   6.953125e-310};
   Double_t Graph0_fex1016[5] = {
   0,
   30,
   0,
   0,
   0};
   Double_t Graph0_fey1016[5] = {
   1.017277,
   35.76673,
   6.953282e-310,
   6.953282e-310,
   6.953282e-310};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,-36,36);
   Graph_Graph01016->SetMinimum(-43.0218);
   Graph_Graph01016->SetMaximum(44.03908);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   
   TF1 *mainFit1017 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1017->SetFillColor(19);
   mainFit1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1017->SetLineColor(ci);
   mainFit1017->SetLineWidth(2);
   mainFit1017->SetChisquare(2.21451e-08);
   mainFit1017->SetNDF(3);
   mainFit1017->GetXaxis()->SetLabelFont(42);
   mainFit1017->GetXaxis()->SetTitleOffset(1);
   mainFit1017->GetXaxis()->SetTitleFont(42);
   mainFit1017->GetYaxis()->SetLabelFont(42);
   mainFit1017->GetYaxis()->SetTitleFont(42);
   mainFit1017->SetParameter(0,0.006689479);
   mainFit1017->SetParError(0,50.56758);
   mainFit1017->SetParLimits(0,0,0);
   mainFit1017->SetParameter(1,1.192004);
   mainFit1017->SetParError(1,1.685927);
   mainFit1017->SetParLimits(1,0,0);
   mainFit1017->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1017);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("7.38e-09");
   pt_LaTex = pt->AddText(" 1.19#pm 1.69");
   pt_LaTex = pt->AddText("0.00669#pm 50.6");
   pt_LaTex = pt->AddText("0.00561#pm 42.4");
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
   TLine *line = new TLine(-36,0,-0.005611962,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.005611962,-43.0218,-0.005611962,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1018 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1018->SetFillColor(19);
   mainFit1018->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1018->SetLineColor(ci);
   mainFit1018->SetLineWidth(2);
   mainFit1018->SetChisquare(2.21451e-08);
   mainFit1018->SetNDF(3);
   mainFit1018->GetXaxis()->SetLabelFont(42);
   mainFit1018->GetXaxis()->SetTitleOffset(1);
   mainFit1018->GetXaxis()->SetTitleFont(42);
   mainFit1018->GetYaxis()->SetLabelFont(42);
   mainFit1018->GetYaxis()->SetTitleFont(42);
   mainFit1018->SetParameter(0,0.006689479);
   mainFit1018->SetParError(0,50.56758);
   mainFit1018->SetParLimits(0,0,0);
   mainFit1018->SetParameter(1,1.192004);
   mainFit1018->SetParError(1,1.685927);
   mainFit1018->SetParLimits(1,0,0);
   mainFit1018->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

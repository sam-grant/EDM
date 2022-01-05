void FieldFit_NSUBRUN_30_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:09:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-46.1673,45,66.36364);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[2] = {
   30,
   -30};
   Double_t Graph0_fy1021[2] = {
   45.188,
   -24.99166};
   Double_t Graph0_fex1021[2] = {
   0,
   0};
   Double_t Graph0_fey1021[2] = {
   2.420479,
   2.420479};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","",100,-36,36);
   Graph_Graph01021->SetMinimum(-34.9142);
   Graph_Graph01021->SetMaximum(55.11054);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   
   TF1 *mainFit1022 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1022->SetFillColor(19);
   mainFit1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1022->SetLineColor(ci);
   mainFit1022->SetLineWidth(2);
   mainFit1022->SetChisquare(1.966281e-15);
   mainFit1022->SetNDF(0);
   mainFit1022->GetXaxis()->SetLabelFont(42);
   mainFit1022->GetXaxis()->SetTitleOffset(1);
   mainFit1022->GetXaxis()->SetTitleFont(42);
   mainFit1022->GetYaxis()->SetLabelFont(42);
   mainFit1022->GetYaxis()->SetTitleFont(42);
   mainFit1022->SetParameter(0,10.09817);
   mainFit1022->SetParError(0,1.711537);
   mainFit1022->SetParLimits(0,0,0);
   mainFit1022->SetParameter(1,1.169661);
   mainFit1022->SetParError(1,0.05705123);
   mainFit1022->SetParLimits(1,0,0);
   mainFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1022);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1.2
#pm0.06
");
   pt_LaTex = pt->AddText("1e+01
#pm2
");
   pt_LaTex = pt->AddText("9
#pm2
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.633416,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.633416,-34.9142,-8.633416,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1023 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1023->SetFillColor(19);
   mainFit1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1023->SetLineColor(ci);
   mainFit1023->SetLineWidth(2);
   mainFit1023->SetChisquare(1.966281e-15);
   mainFit1023->SetNDF(0);
   mainFit1023->GetXaxis()->SetLabelFont(42);
   mainFit1023->GetXaxis()->SetTitleOffset(1);
   mainFit1023->GetXaxis()->SetTitleFont(42);
   mainFit1023->GetYaxis()->SetLabelFont(42);
   mainFit1023->GetYaxis()->SetTitleFont(42);
   mainFit1023->SetParameter(0,10.09817);
   mainFit1023->SetParError(0,1.711537);
   mainFit1023->SetParLimits(0,0,0);
   mainFit1023->SetParameter(1,1.169661);
   mainFit1023->SetParError(1,0.05705123);
   mainFit1023->SetParLimits(1,0,0);
   mainFit1023->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

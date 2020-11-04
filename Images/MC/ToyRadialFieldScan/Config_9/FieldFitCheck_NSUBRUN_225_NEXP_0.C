void FieldFitCheck_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-38.81707,45,54.43936);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1089[3] = {
   -22.35157,
   37.97386,
   7.102007};
   Double_t Graph0_fex1089[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1089[3] = {
   0.9227675,
   0.9227675,
   0.9227675};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","Sub-runs 225",100,-36,36);
   Graph_Graph01089->SetMinimum(-29.49143);
   Graph_Graph01089->SetMaximum(45.11372);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   
   TF1 *checkFit1090 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1090->SetFillColor(19);
   checkFit1090->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1090->SetLineColor(ci);
   checkFit1090->SetLineWidth(2);
   checkFit1090->SetChisquare(0.3937179);
   checkFit1090->SetNDF(1);
   checkFit1090->GetXaxis()->SetLabelFont(42);
   checkFit1090->GetXaxis()->SetTitleOffset(1);
   checkFit1090->GetXaxis()->SetTitleFont(42);
   checkFit1090->GetYaxis()->SetLabelFont(42);
   checkFit1090->GetYaxis()->SetTitleFont(42);
   checkFit1090->SetParameter(0,7.574765);
   checkFit1090->SetParError(0,0.5327601);
   checkFit1090->SetParLimits(0,0,0);
   checkFit1090->SetParameter(1,1.005424);
   checkFit1090->SetParError(1,0.02174984);
   checkFit1090->SetParLimits(1,0,0);
   checkFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1090);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.394");
   pt_LaTex = pt->AddText(" 1.01#pm0.0217");
   pt_LaTex = pt->AddText(" 7.57#pm0.533");
   pt_LaTex = pt->AddText("#minus7.53#pm0.554");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.533903,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.533903,-29.49143,-7.533903,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1091 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1091->SetFillColor(19);
   checkFit1091->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1091->SetLineColor(ci);
   checkFit1091->SetLineWidth(2);
   checkFit1091->SetChisquare(0.3937179);
   checkFit1091->SetNDF(1);
   checkFit1091->GetXaxis()->SetLabelFont(42);
   checkFit1091->GetXaxis()->SetTitleOffset(1);
   checkFit1091->GetXaxis()->SetTitleFont(42);
   checkFit1091->GetYaxis()->SetLabelFont(42);
   checkFit1091->GetYaxis()->SetTitleFont(42);
   checkFit1091->SetParameter(0,7.574765);
   checkFit1091->SetParError(0,0.5327601);
   checkFit1091->SetParLimits(0,0,0);
   checkFit1091->SetParameter(1,1.005424);
   checkFit1091->SetParError(1,0.02174984);
   checkFit1091->SetParLimits(1,0,0);
   checkFit1091->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 225");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

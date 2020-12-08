void FieldFitCheck_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.53271,45,55.86767);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1011[4] = {
   -18.92777,
   -2.456877,
   15.26656,
   38.26273};
   Double_t Graph0_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1011[4] = {
   2.204873,
   2.204873,
   2.204873,
   2.204873};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","25 sub-runs",100,-36,36);
   Graph_Graph01011->SetMinimum(-27.29267);
   Graph_Graph01011->SetMaximum(46.62763);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   
   TF1 *checkFit1012 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1012->SetFillColor(19);
   checkFit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1012->SetLineColor(ci);
   checkFit1012->SetLineWidth(2);
   checkFit1012->SetChisquare(2.355853);
   checkFit1012->SetNDF(2);
   checkFit1012->GetXaxis()->SetLabelFont(42);
   checkFit1012->GetXaxis()->SetTitleOffset(1);
   checkFit1012->GetXaxis()->SetTitleFont(42);
   checkFit1012->GetYaxis()->SetLabelFont(42);
   checkFit1012->GetYaxis()->SetTitleFont(42);
   checkFit1012->SetParameter(0,8.036161);
   checkFit1012->SetParError(0,1.102436);
   checkFit1012->SetParLimits(0,0,0);
   checkFit1012->SetParameter(1,0.9464748);
   checkFit1012->SetParError(1,0.04930245);
   checkFit1012->SetParLimits(1,0,0);
   checkFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1012);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.18");
   pt_LaTex = pt->AddText("0.946#pm0.0493");
   pt_LaTex = pt->AddText(" 8.04#pm  1.1");
   pt_LaTex = pt->AddText(" 8.49#pm 1.25");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.490623,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.490623,-27.29267,-8.490623,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1013 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1013->SetFillColor(19);
   checkFit1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1013->SetLineColor(ci);
   checkFit1013->SetLineWidth(2);
   checkFit1013->SetChisquare(2.355853);
   checkFit1013->SetNDF(2);
   checkFit1013->GetXaxis()->SetLabelFont(42);
   checkFit1013->GetXaxis()->SetTitleOffset(1);
   checkFit1013->GetXaxis()->SetTitleFont(42);
   checkFit1013->GetYaxis()->SetLabelFont(42);
   checkFit1013->GetYaxis()->SetTitleFont(42);
   checkFit1013->SetParameter(0,8.036161);
   checkFit1013->SetParError(0,1.102436);
   checkFit1013->SetParLimits(0,0,0);
   checkFit1013->SetParameter(1,0.9464748);
   checkFit1013->SetParError(1,0.04930245);
   checkFit1013->SetParLimits(1,0,0);
   checkFit1013->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("25 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

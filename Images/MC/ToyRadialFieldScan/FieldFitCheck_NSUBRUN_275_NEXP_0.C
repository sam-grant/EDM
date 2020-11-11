void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.91358,75,82.90548);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1175[6] = {
   -41.45698,
   -22.03974,
   -1.778738,
   18.36085,
   37.95224,
   57.44887};
   Double_t Graph0_fex1175[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1175[6] = {
   0.4867594,
   0.4867594,
   0.4867594,
   0.4867594,
   0.4867594,
   0.4867594};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","275 sub-runs",100,-60,60);
   Graph_Graph01175->SetMinimum(-51.93168);
   Graph_Graph01175->SetMaximum(67.92357);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
   
   TF1 *checkFit1176 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1176->SetFillColor(19);
   checkFit1176->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1176->SetLineColor(ci);
   checkFit1176->SetLineWidth(2);
   checkFit1176->SetChisquare(1.403348);
   checkFit1176->SetNDF(4);
   checkFit1176->GetXaxis()->SetLabelFont(42);
   checkFit1176->GetXaxis()->SetTitleOffset(1);
   checkFit1176->GetXaxis()->SetTitleFont(42);
   checkFit1176->GetYaxis()->SetLabelFont(42);
   checkFit1176->GetYaxis()->SetTitleFont(42);
   checkFit1176->SetParameter(0,8.081084);
   checkFit1176->SetParError(0,0.1987187);
   checkFit1176->SetParLimits(0,0,0);
   checkFit1176->SetParameter(1,0.9923497);
   checkFit1176->SetParError(1,0.005817888);
   checkFit1176->SetParLimits(1,0,0);
   checkFit1176->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1176);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.351");
   pt_LaTex = pt->AddText("0.992#pm0.00582");
   pt_LaTex = pt->AddText(" 8.08#pm0.199");
   pt_LaTex = pt->AddText(" 8.14#pm0.206");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.143383,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.143383,-51.93168,-8.143383,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1177 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1177->SetFillColor(19);
   checkFit1177->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1177->SetLineColor(ci);
   checkFit1177->SetLineWidth(2);
   checkFit1177->SetChisquare(1.403348);
   checkFit1177->SetNDF(4);
   checkFit1177->GetXaxis()->SetLabelFont(42);
   checkFit1177->GetXaxis()->SetTitleOffset(1);
   checkFit1177->GetXaxis()->SetTitleFont(42);
   checkFit1177->GetYaxis()->SetLabelFont(42);
   checkFit1177->GetYaxis()->SetTitleFont(42);
   checkFit1177->SetParameter(0,8.081084);
   checkFit1177->SetParError(0,0.1987187);
   checkFit1177->SetParLimits(0,0,0);
   checkFit1177->SetParameter(1,0.9923497);
   checkFit1177->SetParError(1,0.005817888);
   checkFit1177->SetParLimits(1,0,0);
   checkFit1177->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("275 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

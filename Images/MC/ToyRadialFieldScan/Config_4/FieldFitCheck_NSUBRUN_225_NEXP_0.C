void FieldFitCheck_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.3563,75,83.88719);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1125[5] = {
   -42.05962,
   -17.20566,
   8.051111,
   33.20039,
   57.5905};
   Double_t Graph0_fex1125[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1125[5] = {
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","Sub-runs 225",100,-60,60);
   Graph_Graph01125->SetMinimum(-53.13195);
   Graph_Graph01125->SetMaximum(68.66284);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
   
   TF1 *checkFit1126 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1126->SetFillColor(19);
   checkFit1126->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1126->SetLineColor(ci);
   checkFit1126->SetLineWidth(2);
   checkFit1126->SetChisquare(0.2487934);
   checkFit1126->SetNDF(3);
   checkFit1126->GetXaxis()->SetLabelFont(42);
   checkFit1126->GetXaxis()->SetTitleOffset(1);
   checkFit1126->GetXaxis()->SetTitleFont(42);
   checkFit1126->GetYaxis()->SetLabelFont(42);
   checkFit1126->GetYaxis()->SetTitleFont(42);
   checkFit1126->SetParameter(0,7.915344);
   checkFit1126->SetParError(0,0.4126741);
   checkFit1126->SetParLimits(0,0,0);
   checkFit1126->SetParameter(1,0.9988252);
   checkFit1126->SetParError(1,0.01167219);
   checkFit1126->SetParLimits(1,0,0);
   checkFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1126);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0829");
   pt_LaTex = pt->AddText("0.999#pm0.0117");
   pt_LaTex = pt->AddText(" 7.92#pm0.413");
   pt_LaTex = pt->AddText("#minus7.92#pm0.423");
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
   TLine *line = new TLine(-60,0,-7.924654,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.924654,-53.13195,-7.924654,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1127 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1127->SetFillColor(19);
   checkFit1127->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1127->SetLineColor(ci);
   checkFit1127->SetLineWidth(2);
   checkFit1127->SetChisquare(0.2487934);
   checkFit1127->SetNDF(3);
   checkFit1127->GetXaxis()->SetLabelFont(42);
   checkFit1127->GetXaxis()->SetTitleOffset(1);
   checkFit1127->GetXaxis()->SetTitleFont(42);
   checkFit1127->GetYaxis()->SetLabelFont(42);
   checkFit1127->GetYaxis()->SetTitleFont(42);
   checkFit1127->SetParameter(0,7.915344);
   checkFit1127->SetParError(0,0.4126741);
   checkFit1127->SetParLimits(0,0,0);
   checkFit1127->SetParameter(1,0.9988252);
   checkFit1127->SetParError(1,0.01167219);
   checkFit1127->SetParLimits(1,0,0);
   checkFit1127->Draw("same");
   
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

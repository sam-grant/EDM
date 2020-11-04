void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.22845,45,53.32963);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1131[4] = {
   -21.47831,
   -1.275924,
   16.43977,
   37.57949};
   Double_t Graph0_fex1131[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1131[4] = {
   0.6571252,
   0.6571252,
   0.6571252,
   0.6571252};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","Sub-runs 275",100,-36,36);
   Graph_Graph01131->SetMinimum(-28.17264);
   Graph_Graph01131->SetMaximum(44.27382);
   Graph_Graph01131->SetDirectory(0);
   Graph_Graph01131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01131->SetLineColor(ci);
   Graph_Graph01131->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01131->GetXaxis()->CenterTitle(true);
   Graph_Graph01131->GetXaxis()->SetLabelFont(42);
   Graph_Graph01131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01131->GetXaxis()->SetTitleFont(42);
   Graph_Graph01131->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01131->GetYaxis()->CenterTitle(true);
   Graph_Graph01131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01131->GetYaxis()->SetLabelFont(42);
   Graph_Graph01131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01131->GetYaxis()->SetTitleFont(42);
   Graph_Graph01131->GetZaxis()->SetLabelFont(42);
   Graph_Graph01131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01131);
   
   
   TF1 *checkFit1132 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1132->SetFillColor(19);
   checkFit1132->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1132->SetLineColor(ci);
   checkFit1132->SetLineWidth(2);
   checkFit1132->SetChisquare(4.553997);
   checkFit1132->SetNDF(2);
   checkFit1132->GetXaxis()->SetLabelFont(42);
   checkFit1132->GetXaxis()->SetTitleOffset(1);
   checkFit1132->GetXaxis()->SetTitleFont(42);
   checkFit1132->GetYaxis()->SetLabelFont(42);
   checkFit1132->GetYaxis()->SetTitleFont(42);
   checkFit1132->SetParameter(0,7.816257);
   checkFit1132->SetParError(0,0.3285626);
   checkFit1132->SetParLimits(0,0,0);
   checkFit1132->SetParameter(1,0.9744456);
   checkFit1132->SetParError(1,0.01469377);
   checkFit1132->SetParLimits(1,0,0);
   checkFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1132);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.28");
   pt_LaTex = pt->AddText("0.974#pm0.0147");
   pt_LaTex = pt->AddText(" 7.82#pm0.329");
   pt_LaTex = pt->AddText(" 8.02#pm0.358");
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
   TLine *line = new TLine(-36,0,-8.021235,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.021235,-28.17264,-8.021235,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1133 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1133->SetFillColor(19);
   checkFit1133->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1133->SetLineColor(ci);
   checkFit1133->SetLineWidth(2);
   checkFit1133->SetChisquare(4.553997);
   checkFit1133->SetNDF(2);
   checkFit1133->GetXaxis()->SetLabelFont(42);
   checkFit1133->GetXaxis()->SetTitleOffset(1);
   checkFit1133->GetXaxis()->SetTitleFont(42);
   checkFit1133->GetYaxis()->SetLabelFont(42);
   checkFit1133->GetYaxis()->SetTitleFont(42);
   checkFit1133->SetParameter(0,7.816257);
   checkFit1133->SetParError(0,0.3285626);
   checkFit1133->SetParLimits(0,0,0);
   checkFit1133->SetParameter(1,0.9744456);
   checkFit1133->SetParError(1,0.01469377);
   checkFit1133->SetParLimits(1,0,0);
   checkFit1133->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 275");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

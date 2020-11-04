void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.74294,45,53.33513);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1083[4] = {
   -21.1192,
   -1.907065,
   17.50248,
   37.71139};
   Double_t Graph0_fex1083[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1083[4] = {
   0.6107271,
   0.6107271,
   0.6107271,
   0.6107271};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","Sub-runs 175",100,-36,36);
   Graph_Graph01083->SetMinimum(-27.73513);
   Graph_Graph01083->SetMaximum(44.32732);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
   
   TF1 *checkFit1084 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1084->SetFillColor(19);
   checkFit1084->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1084->SetLineColor(ci);
   checkFit1084->SetLineWidth(2);
   checkFit1084->SetChisquare(0.7145245);
   checkFit1084->SetNDF(2);
   checkFit1084->GetXaxis()->SetLabelFont(42);
   checkFit1084->GetXaxis()->SetTitleOffset(1);
   checkFit1084->GetXaxis()->SetTitleFont(42);
   checkFit1084->GetYaxis()->SetLabelFont(42);
   checkFit1084->GetYaxis()->SetTitleFont(42);
   checkFit1084->SetParameter(0,8.046902);
   checkFit1084->SetParError(0,0.3053636);
   checkFit1084->SetParLimits(0,0,0);
   checkFit1084->SetParameter(1,0.9795066);
   checkFit1084->SetParError(1,0.01365628);
   checkFit1084->SetParLimits(1,0,0);
   checkFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1084);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.357");
   pt_LaTex = pt->AddText(" 0.98#pm0.0137");
   pt_LaTex = pt->AddText(" 8.05#pm0.305");
   pt_LaTex = pt->AddText("#minus8.22#pm0.332");
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
   TLine *line = new TLine(-36,0,-8.215261,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.215261,-27.73513,-8.215261,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1085 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1085->SetFillColor(19);
   checkFit1085->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1085->SetLineColor(ci);
   checkFit1085->SetLineWidth(2);
   checkFit1085->SetChisquare(0.7145245);
   checkFit1085->SetNDF(2);
   checkFit1085->GetXaxis()->SetLabelFont(42);
   checkFit1085->GetXaxis()->SetTitleOffset(1);
   checkFit1085->GetXaxis()->SetTitleFont(42);
   checkFit1085->GetYaxis()->SetLabelFont(42);
   checkFit1085->GetYaxis()->SetTitleFont(42);
   checkFit1085->SetParameter(0,8.046902);
   checkFit1085->SetParError(0,0.3053636);
   checkFit1085->SetParLimits(0,0,0);
   checkFit1085->SetParameter(1,0.9795066);
   checkFit1085->SetParError(1,0.01365628);
   checkFit1085->SetParLimits(1,0,0);
   checkFit1085->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 175");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

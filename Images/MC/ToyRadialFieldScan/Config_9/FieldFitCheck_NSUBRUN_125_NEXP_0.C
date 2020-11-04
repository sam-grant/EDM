void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.66886,45,52.82636);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1049[3] = {
   -20.51341,
   36.67091,
   6.37091};
   Double_t Graph0_fex1049[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1049[3] = {
   1.23958,
   1.23958,
   1.23958};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","Sub-runs 125",100,-36,36);
   Graph_Graph01049->SetMinimum(-27.71933);
   Graph_Graph01049->SetMaximum(43.87684);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   
   TF1 *checkFit1050 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1050->SetFillColor(19);
   checkFit1050->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1050->SetLineColor(ci);
   checkFit1050->SetLineWidth(2);
   checkFit1050->SetChisquare(1.265479);
   checkFit1050->SetNDF(1);
   checkFit1050->GetXaxis()->SetLabelFont(42);
   checkFit1050->GetXaxis()->SetTitleOffset(1);
   checkFit1050->GetXaxis()->SetTitleFont(42);
   checkFit1050->GetYaxis()->SetLabelFont(42);
   checkFit1050->GetYaxis()->SetTitleFont(42);
   checkFit1050->SetParameter(0,7.509471);
   checkFit1050->SetParError(0,0.7156718);
   checkFit1050->SetParLimits(0,0,0);
   checkFit1050->SetParameter(1,0.953072);
   checkFit1050->SetParError(1,0.02921718);
   checkFit1050->SetParLimits(1,0,0);
   checkFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1050);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.27");
   pt_LaTex = pt->AddText("0.953#pm0.0292");
   pt_LaTex = pt->AddText(" 7.51#pm0.716");
   pt_LaTex = pt->AddText("#minus7.88#pm0.789");
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
   TLine *line = new TLine(-36,0,-7.879228,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.879228,-27.71933,-7.879228,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1051 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1051->SetFillColor(19);
   checkFit1051->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1051->SetLineColor(ci);
   checkFit1051->SetLineWidth(2);
   checkFit1051->SetChisquare(1.265479);
   checkFit1051->SetNDF(1);
   checkFit1051->GetXaxis()->SetLabelFont(42);
   checkFit1051->GetXaxis()->SetTitleOffset(1);
   checkFit1051->GetXaxis()->SetTitleFont(42);
   checkFit1051->GetYaxis()->SetLabelFont(42);
   checkFit1051->GetYaxis()->SetTitleFont(42);
   checkFit1051->SetParameter(0,7.509471);
   checkFit1051->SetParError(0,0.7156718);
   checkFit1051->SetParLimits(0,0,0);
   checkFit1051->SetParameter(1,0.953072);
   checkFit1051->SetParError(1,0.02921718);
   checkFit1051->SetParLimits(1,0,0);
   checkFit1051->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

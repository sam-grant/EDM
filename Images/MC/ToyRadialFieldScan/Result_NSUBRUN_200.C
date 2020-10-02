void Result_NSUBRUN_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1215588,45,0.1715588);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1303[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1303[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1303[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1303[4] = {
   0.003955854,
   0.003955854,
   0.003955854,
   0.003955854};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1303,Graph0_fy1303,Graph0_fex1303,Graph0_fey1303);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01303 = new TH1F("Graph_Graph01303","Sub-runs 200",100,-36,36);
   Graph_Graph01303->SetMinimum(-0.09224702);
   Graph_Graph01303->SetMaximum(0.142247);
   Graph_Graph01303->SetDirectory(0);
   Graph_Graph01303->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01303->SetLineColor(ci);
   Graph_Graph01303->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01303->GetXaxis()->CenterTitle(true);
   Graph_Graph01303->GetXaxis()->SetLabelFont(42);
   Graph_Graph01303->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01303->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01303->GetXaxis()->SetTitleFont(42);
   Graph_Graph01303->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01303->GetYaxis()->CenterTitle(true);
   Graph_Graph01303->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01303->GetYaxis()->SetLabelFont(42);
   Graph_Graph01303->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01303->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01303->GetYaxis()->SetTitleFont(42);
   Graph_Graph01303->GetZaxis()->SetLabelFont(42);
   Graph_Graph01303->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01303);
   
   
   TF1 *lineFit21304 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21304->SetFillColor(19);
   lineFit21304->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21304->SetLineColor(ci);
   lineFit21304->SetLineWidth(2);
   lineFit21304->SetChisquare(3.404988e-24);
   lineFit21304->SetNDF(2);
   lineFit21304->GetXaxis()->SetLabelFont(42);
   lineFit21304->GetXaxis()->SetTitleOffset(1);
   lineFit21304->GetXaxis()->SetTitleFont(42);
   lineFit21304->GetYaxis()->SetLabelFont(42);
   lineFit21304->GetYaxis()->SetTitleFont(42);
   lineFit21304->SetParameter(0,0.025);
   lineFit21304->SetParError(0,0.001977927);
   lineFit21304->SetParLimits(0,0,0);
   lineFit21304->SetParameter(1,-0.003125);
   lineFit21304->SetParError(1,8.845558e-05);
   lineFit21304->SetParLimits(1,0,0);
   lineFit21304->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21304);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.7#times10^{#minus24}");
   pt_LaTex = pt->AddText("#minus0.00313#pm8.85e-05");
   pt_LaTex = pt->AddText("0.025#pm0.00198");
   pt_LaTex = pt->AddText("    8#pm0.672");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,-0.09224702,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21305 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21305->SetFillColor(19);
   lineFit21305->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21305->SetLineColor(ci);
   lineFit21305->SetLineWidth(2);
   lineFit21305->SetChisquare(3.404988e-24);
   lineFit21305->SetNDF(2);
   lineFit21305->GetXaxis()->SetLabelFont(42);
   lineFit21305->GetXaxis()->SetTitleOffset(1);
   lineFit21305->GetXaxis()->SetTitleFont(42);
   lineFit21305->GetYaxis()->SetLabelFont(42);
   lineFit21305->GetYaxis()->SetTitleFont(42);
   lineFit21305->SetParameter(0,0.025);
   lineFit21305->SetParError(0,0.001977927);
   lineFit21305->SetParLimits(0,0,0);
   lineFit21305->SetParameter(1,-0.003125);
   lineFit21305->SetParError(1,8.845558e-05);
   lineFit21305->SetParLimits(1,0,0);
   lineFit21305->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 200");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

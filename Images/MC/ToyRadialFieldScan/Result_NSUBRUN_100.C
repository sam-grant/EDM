void Result_NSUBRUN_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:35 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1240765,45,0.1740765);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1087[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1087[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1087[4] = {
   0.005634311,
   0.005634311,
   0.005634311,
   0.005634311};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 100");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","Sub-runs 100",100,-36,36);
   Graph_Graph01087->SetMinimum(-0.09426117);
   Graph_Graph01087->SetMaximum(0.1442612);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   
   TF1 *lineFit21088 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21088->SetFillColor(19);
   lineFit21088->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21088->SetLineColor(ci);
   lineFit21088->SetLineWidth(2);
   lineFit21088->SetChisquare(2.800282e-25);
   lineFit21088->SetNDF(2);
   lineFit21088->GetXaxis()->SetLabelFont(42);
   lineFit21088->GetXaxis()->SetTitleOffset(1);
   lineFit21088->GetXaxis()->SetTitleFont(42);
   lineFit21088->GetYaxis()->SetLabelFont(42);
   lineFit21088->GetYaxis()->SetTitleFont(42);
   lineFit21088->SetParameter(0,0.025);
   lineFit21088->SetParError(0,0.002817155);
   lineFit21088->SetParLimits(0,0,0);
   lineFit21088->SetParameter(1,-0.003125);
   lineFit21088->SetParError(1,0.000125987);
   lineFit21088->SetParLimits(1,0,0);
   lineFit21088->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21088);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.4#times10^{#minus25}");
   pt_LaTex = pt->AddText("#minus0.00313#pm0.000126");
   pt_LaTex = pt->AddText("0.025#pm0.00282");
   pt_LaTex = pt->AddText("    8#pm0.957");
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
   line = new TLine(8,-0.09426117,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21089 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21089->SetFillColor(19);
   lineFit21089->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21089->SetLineColor(ci);
   lineFit21089->SetLineWidth(2);
   lineFit21089->SetChisquare(2.800282e-25);
   lineFit21089->SetNDF(2);
   lineFit21089->GetXaxis()->SetLabelFont(42);
   lineFit21089->GetXaxis()->SetTitleOffset(1);
   lineFit21089->GetXaxis()->SetTitleFont(42);
   lineFit21089->GetYaxis()->SetLabelFont(42);
   lineFit21089->GetYaxis()->SetTitleFont(42);
   lineFit21089->SetParameter(0,0.025);
   lineFit21089->SetParError(0,0.002817155);
   lineFit21089->SetParLimits(0,0,0);
   lineFit21089->SetParameter(1,-0.003125);
   lineFit21089->SetParError(1,0.000125987);
   lineFit21089->SetParLimits(1,0,0);
   lineFit21089->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 100");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

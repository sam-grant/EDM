void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1989388,45,0.1380913);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1047[3] = {
   0.0772515,
   -0.1380991,
   -0.02399223};
   Double_t Graph0_fex1047[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1047[3] = {
   0.004668139,
   0.00466803,
   0.004668124};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","Sub-runs 125",100,-36,36);
   Graph_Graph01047->SetMinimum(-0.1652358);
   Graph_Graph01047->SetMaximum(0.1043883);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   
   TF1 *mainFit1048 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1048->SetFillColor(19);
   mainFit1048->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1048->SetLineColor(ci);
   mainFit1048->SetLineWidth(2);
   mainFit1048->SetChisquare(1.265493);
   mainFit1048->SetNDF(1);
   mainFit1048->GetXaxis()->SetLabelFont(42);
   mainFit1048->GetXaxis()->SetTitleOffset(1);
   mainFit1048->GetXaxis()->SetTitleFont(42);
   mainFit1048->GetYaxis()->SetLabelFont(42);
   mainFit1048->GetYaxis()->SetTitleFont(42);
   mainFit1048->SetParameter(0,-0.02827996);
   mainFit1048->SetParError(0,0.002695128);
   mainFit1048->SetParLimits(0,0,0);
   mainFit1048->SetParameter(1,-0.003589178);
   mainFit1048->SetParError(1,0.0001100278);
   mainFit1048->SetParLimits(1,0,0);
   mainFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1048);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.27");
   pt_LaTex = pt->AddText("#minus0.00359#pm0.00011");
   pt_LaTex = pt->AddText("#minus0.0283#pm0.0027");
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
   TLine *line = new TLine(-36,0,-7.879231,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.879231,-0.1652358,-7.879231,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1049 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1049->SetFillColor(19);
   mainFit1049->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1049->SetLineColor(ci);
   mainFit1049->SetLineWidth(2);
   mainFit1049->SetChisquare(1.265493);
   mainFit1049->SetNDF(1);
   mainFit1049->GetXaxis()->SetLabelFont(42);
   mainFit1049->GetXaxis()->SetTitleOffset(1);
   mainFit1049->GetXaxis()->SetTitleFont(42);
   mainFit1049->GetYaxis()->SetLabelFont(42);
   mainFit1049->GetYaxis()->SetTitleFont(42);
   mainFit1049->SetParameter(0,-0.02827996);
   mainFit1049->SetParError(0,0.002695128);
   mainFit1049->SetParLimits(0,0,0);
   mainFit1049->SetParameter(1,-0.003589178);
   mainFit1049->SetParError(1,0.0001100278);
   mainFit1049->SetParLimits(1,0,0);
   mainFit1049->Draw("same");
   
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

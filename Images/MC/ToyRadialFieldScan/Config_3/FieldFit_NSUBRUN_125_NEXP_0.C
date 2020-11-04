void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3132925,75,0.2530585);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[2] = {
   -50,
   50};
   Double_t Graph0_fy1037[2] = {
   0.1539985,
   -0.2142325};
   Double_t Graph0_fex1037[2] = {
   0,
   0};
   Double_t Graph0_fey1037[2] = {
   0.004668138,
   0.004668138};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","Sub-runs 125",100,-60,60);
   Graph_Graph01037->SetMinimum(-0.2566574);
   Graph_Graph01037->SetMaximum(0.1964234);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   
   TF1 *mainFit1038 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1038->SetFillColor(19);
   mainFit1038->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1038->SetLineColor(ci);
   mainFit1038->SetLineWidth(2);
   mainFit1038->SetChisquare(2.241616e-16);
   mainFit1038->SetNDF(0);
   mainFit1038->GetXaxis()->SetLabelFont(42);
   mainFit1038->GetXaxis()->SetTitleOffset(1);
   mainFit1038->GetXaxis()->SetTitleFont(42);
   mainFit1038->GetYaxis()->SetLabelFont(42);
   mainFit1038->GetYaxis()->SetTitleFont(42);
   mainFit1038->SetParameter(0,-0.03011701);
   mainFit1038->SetParError(0,0.003300872);
   mainFit1038->SetParLimits(0,0,0);
   mainFit1038->SetParameter(1,-0.00368231);
   mainFit1038->SetParError(1,6.601744e-05);
   mainFit1038->SetParLimits(1,0,0);
   mainFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1038);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00368#pm6.6e-05");
   pt_LaTex = pt->AddText("#minus0.0301#pm0.0033");
   pt_LaTex = pt->AddText("#minus8.18#pm0.908");
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
   TLine *line = new TLine(-60,0,-8.178836,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.178836,-0.2566574,-8.178836,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1039 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1039->SetFillColor(19);
   mainFit1039->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1039->SetLineColor(ci);
   mainFit1039->SetLineWidth(2);
   mainFit1039->SetChisquare(2.241616e-16);
   mainFit1039->SetNDF(0);
   mainFit1039->GetXaxis()->SetLabelFont(42);
   mainFit1039->GetXaxis()->SetTitleOffset(1);
   mainFit1039->GetXaxis()->SetTitleFont(42);
   mainFit1039->GetYaxis()->SetLabelFont(42);
   mainFit1039->GetYaxis()->SetTitleFont(42);
   mainFit1039->SetParameter(0,-0.03011701);
   mainFit1039->SetParError(0,0.003300872);
   mainFit1039->SetParLimits(0,0,0);
   mainFit1039->SetParameter(1,-0.00368231);
   mainFit1039->SetParError(1,6.601744e-05);
   mainFit1039->SetParLimits(1,0,0);
   mainFit1039->Draw("same");
   
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

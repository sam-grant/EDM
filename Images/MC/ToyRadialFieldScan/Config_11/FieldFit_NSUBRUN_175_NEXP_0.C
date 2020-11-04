void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3120174,75,0.2512621);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[2] = {
   -50,
   50};
   Double_t Graph0_fy1053[2] = {
   0.1534395,
   -0.2141949};
   Double_t Graph0_fex1053[2] = {
   0,
   0};
   Double_t Graph0_fey1053[2] = {
   0.003942662,
   0.003942589};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","Sub-runs 175",100,-60,60);
   Graph_Graph01053->SetMinimum(-0.2556895);
   Graph_Graph01053->SetMaximum(0.1949341);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   
   TF1 *mainFit1054 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1054->SetFillColor(19);
   mainFit1054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1054->SetLineColor(ci);
   mainFit1054->SetLineWidth(2);
   mainFit1054->SetChisquare(5.081316e-17);
   mainFit1054->SetNDF(0);
   mainFit1054->GetXaxis()->SetLabelFont(42);
   mainFit1054->GetXaxis()->SetTitleOffset(1);
   mainFit1054->GetXaxis()->SetTitleFont(42);
   mainFit1054->GetYaxis()->SetLabelFont(42);
   mainFit1054->GetYaxis()->SetTitleFont(42);
   mainFit1054->SetParameter(0,-0.03037771);
   mainFit1054->SetParError(0,0.002787857);
   mainFit1054->SetParLimits(0,0,0);
   mainFit1054->SetParameter(1,-0.003676344);
   mainFit1054->SetParError(1,5.575715e-05);
   mainFit1054->SetParLimits(1,0,0);
   mainFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1054);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00368#pm5.58e-05");
   pt_LaTex = pt->AddText("#minus0.0304#pm0.00279");
   pt_LaTex = pt->AddText("#minus8.26#pm0.769");
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
   TLine *line = new TLine(-60,0,-8.263022,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.263022,-0.2556895,-8.263022,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1055 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1055->SetFillColor(19);
   mainFit1055->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1055->SetLineColor(ci);
   mainFit1055->SetLineWidth(2);
   mainFit1055->SetChisquare(5.081316e-17);
   mainFit1055->SetNDF(0);
   mainFit1055->GetXaxis()->SetLabelFont(42);
   mainFit1055->GetXaxis()->SetTitleOffset(1);
   mainFit1055->GetXaxis()->SetTitleFont(42);
   mainFit1055->GetYaxis()->SetLabelFont(42);
   mainFit1055->GetYaxis()->SetTitleFont(42);
   mainFit1055->SetParameter(0,-0.03037771);
   mainFit1055->SetParError(0,0.002787857);
   mainFit1055->SetParLimits(0,0,0);
   mainFit1055->SetParameter(1,-0.003676344);
   mainFit1055->SetParError(1,5.575715e-05);
   mainFit1055->SetParLimits(1,0,0);
   mainFit1055->Draw("same");
   
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

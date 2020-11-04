void FieldFit_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:37 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.208815,45,0.1362993);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1007[3] = {
   0.06845279,
   -0.1409633,
   -0.01731778};
   Double_t Graph0_fex1007[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1007[3] = {
   0.0103275,
   0.01033262,
   0.01033337};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","Sub-runs 25",100,-36,36);
   Graph_Graph01007->SetMinimum(-0.1743035);
   Graph_Graph01007->SetMaximum(0.1017879);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   
   TF1 *mainFit1008 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1008->SetFillColor(19);
   mainFit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1008->SetLineColor(ci);
   mainFit1008->SetLineWidth(2);
   mainFit1008->SetChisquare(2.239553);
   mainFit1008->SetNDF(1);
   mainFit1008->GetXaxis()->SetLabelFont(42);
   mainFit1008->GetXaxis()->SetTitleOffset(1);
   mainFit1008->GetXaxis()->SetTitleFont(42);
   mainFit1008->GetYaxis()->SetLabelFont(42);
   mainFit1008->GetYaxis()->SetTitleFont(42);
   mainFit1008->SetParameter(0,-0.02994546);
   mainFit1008->SetParError(0,0.0059647);
   mainFit1008->SetParLimits(0,0,0);
   mainFit1008->SetParameter(1,-0.003490164);
   mainFit1008->SetParError(1,0.0002434819);
   mainFit1008->SetParLimits(1,0,0);
   mainFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1008);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.24");
   pt_LaTex = pt->AddText("#minus0.00349#pm0.000243");
   pt_LaTex = pt->AddText("#minus0.0299#pm0.00596");
   pt_LaTex = pt->AddText("#minus8.58#pm 1.81");
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
   TLine *line = new TLine(-36,0,-8.579958,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.579958,-0.1743035,-8.579958,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1009 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1009->SetFillColor(19);
   mainFit1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1009->SetLineColor(ci);
   mainFit1009->SetLineWidth(2);
   mainFit1009->SetChisquare(2.239553);
   mainFit1009->SetNDF(1);
   mainFit1009->GetXaxis()->SetLabelFont(42);
   mainFit1009->GetXaxis()->SetTitleOffset(1);
   mainFit1009->GetXaxis()->SetTitleFont(42);
   mainFit1009->GetYaxis()->SetLabelFont(42);
   mainFit1009->GetYaxis()->SetTitleFont(42);
   mainFit1009->SetParameter(0,-0.02994546);
   mainFit1009->SetParError(0,0.0059647);
   mainFit1009->SetParLimits(0,0,0);
   mainFit1009->SetParameter(1,-0.003490164);
   mainFit1009->SetParError(1,0.0002434819);
   mainFit1009->SetParLimits(1,0,0);
   mainFit1009->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

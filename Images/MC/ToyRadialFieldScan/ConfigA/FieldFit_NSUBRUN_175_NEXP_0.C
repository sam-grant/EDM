void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3651887,75,0.2939715);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1109[6] = {
   0.1816178,
   0.09460143,
   0.01280474,
   -0.08237806,
   -0.1623088,
   -0.2528351};
   Double_t Graph0_fex1109[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1109[6] = {
   0.002493651,
   0.002493612,
   0.002493616,
   0.002493647,
   0.002493552,
   0.002493614};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","Sub-runs 175",100,-60,60);
   Graph_Graph01109->SetMinimum(-0.2992727);
   Graph_Graph01109->SetMaximum(0.2280555);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
   
   TF1 *mainFit1110 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1110->SetFillColor(19);
   mainFit1110->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1110->SetLineColor(ci);
   mainFit1110->SetLineWidth(2);
   mainFit1110->SetChisquare(7.142213);
   mainFit1110->SetNDF(4);
   mainFit1110->GetXaxis()->SetLabelFont(42);
   mainFit1110->GetXaxis()->SetTitleOffset(1);
   mainFit1110->GetXaxis()->SetTitleFont(42);
   mainFit1110->GetYaxis()->SetLabelFont(42);
   mainFit1110->GetYaxis()->SetTitleFont(42);
   mainFit1110->SetParameter(0,-0.03474961);
   mainFit1110->SetParError(0,0.001018014);
   mainFit1110->SetParLimits(0,0,0);
   mainFit1110->SetParameter(1,-0.004340253);
   mainFit1110->SetParError(1,2.980445e-05);
   mainFit1110->SetParLimits(1,0,0);
   mainFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1110);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.79");
   pt_LaTex = pt->AddText("#minus0.00434#pm2.98e-05");
   pt_LaTex = pt->AddText("#minus0.0347#pm0.00102");
   pt_LaTex = pt->AddText("#minus8.01#pm0.241");
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
   TLine *line = new TLine(-60,0,-8.006355,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.006355,-0.2992727,-8.006355,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1111 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1111->SetFillColor(19);
   mainFit1111->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1111->SetLineColor(ci);
   mainFit1111->SetLineWidth(2);
   mainFit1111->SetChisquare(7.142213);
   mainFit1111->SetNDF(4);
   mainFit1111->GetXaxis()->SetLabelFont(42);
   mainFit1111->GetXaxis()->SetTitleOffset(1);
   mainFit1111->GetXaxis()->SetTitleFont(42);
   mainFit1111->GetYaxis()->SetLabelFont(42);
   mainFit1111->GetYaxis()->SetTitleFont(42);
   mainFit1111->SetParameter(0,-0.03474961);
   mainFit1111->SetParError(0,0.001018014);
   mainFit1111->SetParLimits(0,0,0);
   mainFit1111->SetParameter(1,-0.004340253);
   mainFit1111->SetParError(1,2.980445e-05);
   mainFit1111->SetParLimits(1,0,0);
   mainFit1111->Draw("same");
   
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

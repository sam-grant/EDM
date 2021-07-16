void AnaOverlay_A_vs_p_overlay_AAR_200()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 14 16:31:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->Range(-0.1375,-0.04988693,1.1375,0.4833135);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[15] = {
   0.03225806,
   0.09677419,
   0.1612903,
   0.2258065,
   0.2903226,
   0.3548387,
   0.4193548,
   0.483871,
   0.5483871,
   0.6129032,
   0.6774194,
   0.7419355,
   0.8064516,
   0.8709677,
   0.9354839};
   Double_t A_vs_p_fy1001[15] = {
   0.06810192,
   0.07689207,
   0.09810062,
   0.08082525,
   0.08227296,
   0.08048853,
   0.07776041,
   0.06911727,
   0.07298094,
   0.05895562,
   0.045274,
   0.04393442,
   0.03418093,
   0.02255181,
   0.01342886};
   Double_t A_vs_p_fex1001[15] = {
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806,
   0.03225806};
   Double_t A_vs_p_fey1001[15] = {
   0.02356179,
   0.009741247,
   0.007213105,
   0.005913954,
   0.005090829,
   0.004516591,
   0.004097626,
   0.003779895,
   0.003529414,
   0.003332125,
   0.003176489,
   0.003060451,
   0.002979366,
   0.002944506,
   0.003021606};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle("LAB");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","LAB",100,0,1);
   Graph_A_vs_p1001->SetMinimum(0.003433109);
   Graph_A_vs_p1001->SetMaximum(0.4299934);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} #lambda = p/p_{max}");
   Graph_A_vs_p1001->GetXaxis()->SetRange(0,101);
   Graph_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [a.u.]");
   Graph_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1001);
   
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("A_vs_p","Sim (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_A","Expected form","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4530326,0.94,0.5469674,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("LAB");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

void Y_41()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_41__85 = new TH1F("Y_41__85","Plane 41",100,-100,100);
   Y_41__85->SetBinContent(35,1);
   Y_41__85->SetBinContent(41,7);
   Y_41__85->SetBinContent(42,11);
   Y_41__85->SetBinContent(43,34);
   Y_41__85->SetBinContent(44,18);
   Y_41__85->SetBinContent(45,17);
   Y_41__85->SetBinContent(46,15);
   Y_41__85->SetBinContent(47,13);
   Y_41__85->SetBinContent(48,12);
   Y_41__85->SetBinContent(49,34);
   Y_41__85->SetBinContent(50,76);
   Y_41__85->SetBinContent(51,46);
   Y_41__85->SetBinContent(52,12);
   Y_41__85->SetBinContent(53,12);
   Y_41__85->SetBinContent(54,12);
   Y_41__85->SetBinContent(55,12);
   Y_41__85->SetBinContent(56,15);
   Y_41__85->SetBinContent(57,18);
   Y_41__85->SetBinContent(58,28);
   Y_41__85->SetBinContent(59,30);
   Y_41__85->SetBinContent(61,1);
   Y_41__85->SetBinContent(70,1);
   Y_41__85->SetEntries(425);
   Y_41__85->SetLineWidth(3);
   Y_41__85->GetXaxis()->SetTitle("Y [mm]");
   Y_41__85->GetXaxis()->CenterTitle(true);
   Y_41__85->GetXaxis()->SetLabelFont(42);
   Y_41__85->GetXaxis()->SetTitleSize(0.04);
   Y_41__85->GetXaxis()->SetTitleOffset(1.1);
   Y_41__85->GetXaxis()->SetTitleFont(42);
   Y_41__85->GetYaxis()->SetTitle("Ghost tracks");
   Y_41__85->GetYaxis()->CenterTitle(true);
   Y_41__85->GetYaxis()->SetNdivisions(4000510);
   Y_41__85->GetYaxis()->SetLabelFont(42);
   Y_41__85->GetYaxis()->SetTitleSize(0.04);
   Y_41__85->GetYaxis()->SetTitleOffset(1.1);
   Y_41__85->GetYaxis()->SetTitleFont(42);
   Y_41__85->GetZaxis()->SetLabelFont(42);
   Y_41__85->GetZaxis()->SetTitleOffset(1);
   Y_41__85->GetZaxis()->SetTitleFont(42);
   Y_41__85->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
